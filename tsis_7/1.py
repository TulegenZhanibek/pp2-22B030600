import pygame 
from datetime import datetime

pygame.init()
second_and_minut = datetime.today()
clock = pygame.time.Clock()
screen = pygame.display.set_mode((820, 820))
image = pygame.image.load("C:/pp2/tsis_7/image/bb.png")
right = pygame.image.load("C:/pp2/tsis_7/image/right.png")
left = pygame.image.load("C:/pp2/tsis_7/image/left.png")
angle1 = 6 * (int(second_and_minut.strftime("%S")) + 1) * (-1)
angle2 = 6 * (int(second_and_minut.strftime("%M"))) * (-1)

while True:
    screen.blit(image, (0, 0))
    rotated_right = pygame.transform.rotate(right, angle1)
    rotated_left = pygame.transform.rotate(left, angle2)
    if angle1 % 360 == 0:
        angle2 -= 6
    rotated_right_rect = rotated_right.get_rect(center = (415, 420))
    rotated_left_rect = rotated_left.get_rect(center = (417, 420))
    screen.blit(rotated_right, rotated_right_rect)
    screen.blit(rotated_left, rotated_left_rect)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()
    angle1 -= 1
    pygame.display.update()
    clock.tick(6)