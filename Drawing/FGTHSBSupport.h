//
//  FGTHSBSupport.h
//  BrushTest
//
//  Created by Coding on 8/7/16.
//  Copyright © 2016 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>

//------------------------------------------------------------------------------

CGFloat pin(CGFloat minValue, CGFloat value, CGFloat maxValue);

//------------------------------------------------------------------------------

	// These functions convert between an RGB value with components in the
	// 0.0f..1.0f range to HSV where Hue, Saturation and
	// Value (aka Brightness) are percentages expressed as 0.0f..1.0f.
	//
	// Note that HSB (B = Brightness) and HSV (V = Value) are interchangeable
	// names that mean the same thing. I use V here as it is unambiguous
	// relative to the B in RGB, which is Blue.


void HSVtoRGB(const CGFloat*hsv, CGFloat* bgr);

void RGBToHSV(const CGFloat *bgr, CGFloat *hsv,
              BOOL preserveHS);

//------------------------------------------------------------------------------

UIImage* createSaturationBrightnessSquareContentImageWithHue(CGFloat hue);
	// Generates a 256x256 image with the specified constant hue where the
	// Saturation and value vary in the X and Y axes respectively.

//------------------------------------------------------------------------------

typedef enum {
	FGTColorHSVIndexHue = 0,
	FGTColorHSVIndexSaturation = 1,
	FGTColorHSVIndexBrightness = 2,
} FGTColorHSVIndex;

typedef enum {
    FGTColorIndexBlue = 0,
    FGTColorIndexGreen = 1,
    FGTColorIndexRed = 2,
} FGTColorIndex;

UIImage* HSVBarContentImage(FGTColorHSVIndex colorHSVIndex, CGFloat hsv[3]);
	// Generates an image where the specified barComponentIndex (0=H, 1=S, 2=V)
	// varies across the x-axis of the 256x1 pixel image and the other components
	// remain at the constant value specified in the hsv array.

//------------------------------------------------------------------------------


UIImage *sliderImage(const CGFloat *bgr, FGTColorIndex whichColor, int h);
UIImage *hsvSliderImage(const CGFloat *hsv,FGTColorHSVIndex index, int h);

void HSVFromUIColor(UIColor* color, CGFloat hsv[3]);


