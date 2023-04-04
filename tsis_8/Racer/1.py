import random, time, sys
import pygame

pygame.init()
WIDTH, HEIGHT = 400, 600
SCREEN = pygame.display.set_mode((WIDTH, HEIGHT))
RED = (255, 0, 0)
BLACK = (0, 0, 0)
BLUE = (0, 0, 255)
GREEN = (0, 255, 0)
BLOCK_SIZE = 40
WHITE = (255, 255, 255)
SCORE = 0
MONEY = 0
clock = pygame.time.Clock()
background = pygame.image.load(r"C:\pp2\tsis_8\Racer\AnimatedStreet.png")
score_font = pygame.font.SysFont("Verdana", 20)
game = pygame.font.SysFont("Verdana", 60)


class Coin(pygame.sprite.Sprite):
    
    def __init__(self):
        super().__init__()
        self.coin = pygame.image.load(r"C:\pp2\tsis_8\Racer\coin.png")
        self.rect = self.coin.get_rect()
        self.speed = 10
        self.rect.center = (random.randint(self.rect.width, WIDTH - self.rect.width), 0)
    
    def draw(self,surface):   
        surface.blit(self.coin, self.rect)
        
    def update(self):
        self.rect.move_ip(0, self.speed)
        if self.rect.y > HEIGHT:
            self.rect.center = (random.randint(self.rect.width, WIDTH - self.rect.width), 0)

    def delete(self):
        pass
         

class Enemy(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.speed = 8
        self.image = pygame.image.load(r"C:\pp2\tsis_8\Racer\Enemy.png")
        self.rect = self.image.get_rect()
        self.rect.center = (random.randint(self.rect.width, WIDTH - self.rect.width), 0)

    def draw(self, surface):
        surface.blit(self.image, self.rect)

    def update(self):
        global SCORE
        self.rect.move_ip(0, self.speed)
        if self.rect.y > HEIGHT:
            SCORE += 1
            self.speed += 1
            self.rect.center = (random.randint(self.rect.width, WIDTH - self.rect.width), 0)


class Player(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.speed = 5
        self.image = pygame.image.load(r"C:\pp2\tsis_8\Racer\Player.png")
        self.rect = self.image.get_rect()
        self.rect.center = (WIDTH // 2, HEIGHT - self.rect.height // 2 - 20)

    def draw(self, surface):
        surface.blit(self.image, self.rect)

    def update(self):
        pressed = pygame.key.get_pressed()
        if pressed[pygame.K_LEFT] and self.rect.x - self.speed >= 0:
            self.rect.move_ip(-self.speed, 0)
        elif pressed[pygame.K_RIGHT] and self.rect.x + self.speed + self.rect.width <= WIDTH:
            self.rect.move_ip(self.speed, 0)


def main():
    running = True
    global  MONEY
    player = Player()
    enemy = Enemy()
    coin = Coin()
    
    coins = pygame.sprite.Group()
    coins.add(coin)
    
    enemies = pygame.sprite.Group()
    enemies.add(enemy)
    
    while running:
        SCREEN.blit(background, (0, 0))
        score = score_font.render(f" Your score: {SCORE}", True, BLACK)
        money = score_font.render(f"{MONEY}", True, RED)
        game_over = game.render("Game Over", True, BLACK)
        SCREEN.blit(score, (0, 0))
        SCREEN.blit(money, (350, 10))

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
                exit()
                

        player.update()
        enemy.update()
        coin.update()

        player.draw(SCREEN)
        enemy.draw(SCREEN)
        coin.draw(SCREEN)
        
        if pygame.sprite.spritecollideany(player, coins):
            MONEY += 1
            coin.update()
        
        if pygame.sprite.spritecollideany(player, enemies):
            pygame.mixer.music.load(r"C:\pp2\tsis_8\Racer\crash.wav")
            pygame.mixer.music.play()
            SCREEN.fill(RED)
            SCREEN.blit(game_over, (30, 250))
            pygame.display.update()
            time.sleep(2)
            running = False
        
        if not pygame.sprite.spritecollideany(player, enemies):
            pygame.mixer.music.load(r"C:\pp2\tsis_8\Racer\background.wav")
            pygame.mixer.music.play()
        
        pygame.display.flip()
        clock.tick(60)


if __name__ == '__main__':
    main()