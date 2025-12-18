#include "colors.hpp"

std::string colorName(BasicColor color) {
  // TODO: Use switch to return color name string
  // BasicColor::Red -> "Red"
  // etc.
  return "";
}

RGBColor toRGB(BasicColor color) {
  // TODO: Return RGB values for each basic color
  // Red: {255, 0, 0}
  // Green: {0, 255, 0}
  // Blue: {0, 0, 255}
  // etc.
  return {0, 0, 0};
}

RGBColor blendColors(const RGBColor &c1, const RGBColor &c2) {
  // TODO: Return average of each component
  // newR = (c1.r + c2.r) / 2
  // etc.
  return {0, 0, 0};
}

RGBColor invertColor(const RGBColor &c) {
  // TODO: Return inverted color
  // newR = 255 - c.r
  // etc.
  return {0, 0, 0};
}

uint8_t toGrayscale(const RGBColor &c) {
  // TODO: Compute grayscale using luminosity formula
  // gray = 0.299*R + 0.587*G + 0.114*B
  return 0;
}

RGBColor fromHex(uint32_t hex) {
  // TODO: Extract R, G, B from hex value
  // R = (hex >> 16) & 0xFF
  // G = (hex >> 8) & 0xFF
  // B = hex & 0xFF
  return {0, 0, 0};
}

uint32_t toHex(const RGBColor &c) {
  // TODO: Combine R, G, B into hex value
  // hex = (R << 16) | (G << 8) | B
  return 0;
}
