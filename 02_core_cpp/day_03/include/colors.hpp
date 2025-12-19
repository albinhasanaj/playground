#pragma once
#include <cstdint>
#include <string>

/**
 * Scoped enum for basic colors
 */
enum class BasicColor { Red, Green, Blue, Yellow, Cyan, Magenta, White, Black };

/**
 * RGB color representation
 */
struct RGBColor {
  uint8_t r;
  uint8_t g;
  uint8_t b;
};

/**
 * RGBA color with alpha channel
 */
struct RGBAColor {
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t a;
};

/**
 * @brief Converts BasicColor enum to name string
 */
std::string colorName(BasicColor color);

/**
 * @brief Converts BasicColor to RGB values
 */
RGBColor toRGB(BasicColor color);

/**
 * @brief Blends two RGB colors (simple average)
 */
RGBColor blendColors(const RGBColor &c1, const RGBColor &c2);

/**
 * @brief Inverts an RGB color (255 - component)
 */
RGBColor invertColor(const RGBColor &c);

/**
 * @brief Computes grayscale value of RGB color
 * Uses luminosity formula: 0.299R + 0.587G + 0.114B
 */
uint8_t toGrayscale(const RGBColor &c);

/**
 * @brief Creates RGBColor from hex value (e.g., 0xFF5733)
 */
RGBColor fromHex(uint32_t hex);

/**
 * @brief Converts RGB to hex value
 */
uint32_t toHex(const RGBColor &c);
