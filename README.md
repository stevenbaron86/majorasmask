# Majora's Mask — Glowing Eyes

Majora's Mask using an Arduino Nano Every and two WS2812B addressable LED rings.

<img width="420" height="487" alt="image" src="https://github.com/user-attachments/assets/7f1267bb-4e73-44a0-9e0a-50165aa6b1d2" />

---

## Project Overview

The eyes are made from two 16-pixel WS2812B LED rings, for a total of 32
individually addressable LEDs, and a very poorly made 3d model included. 

An Arduino Nano Every controls the LEDs using the FastLED library.

A small rechargeable LiPo battery module provides the 5V power used by the
Arduino and LED rings. Battery at default brightness lasts about 2 hours.

---

# Components

1. Arduino Nano Every https://www.amazon.com/dp/B07VX7MX27?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1

2. Battery with 5V converter https://www.amazon.com/dp/B0GWZTQC35?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1

3. (2) 16 X WS2812B LED ring https://www.amazon.com/dp/B08PCP6RY7?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1

4. Majoras Mask costume prop hilariously named "Pigmiss Halloween Mask Scary Realistic Face Mask Cosplay Costume Novelty Game Props for Adults"  https://www.amazon.com/dp/B0CFHHB96X?ref=ppx_yo2ov_dt_b_fed_asin_title

5. Wiring, solder, 3d printer, hot glue

---

# Assembly

1. Cut out the eyes on the mask, run the WS2812Bs between the foam and plastic white backing, hot glue the rings down, route the female end out the side of the mask.

2. Wire one of the battery pack's 5v to the LEDs. Wire the data cable to D6 on the Arduino board, Arduino 5v and ground to battery.

<img width="930" height="736" alt="image" src="https://github.com/user-attachments/assets/afeed7a8-4089-40c2-9cef-e582fbf399a6" />
