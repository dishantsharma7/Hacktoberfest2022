#python script to resize image

from PIL import Image
import os
import PIL
import glob

image = Image.open('file address here')
print(image.size)
height_percent =0.50
height_size = int((float(image.size[1]) * float(height_percent)))
width_size = int((float(image.size[0]) * float(height_percent)))
image = image.resize((width_size, height_size), PIL.Image.NEAREST)
print(image.size)
image.save('resized_nearest.jpg')
