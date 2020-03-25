//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GeometricCutTools : NSObject
{
}

+ (id)geometricRecognitionCandidatesOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(struct CHNeuralNetwork )arg6 activations:(vector_00ef371e)arg7 invert:(BOOL)arg8 recognitionWindowSize:(CGSize)arg9;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withCodeMap:(const int )arg6 activations:(vector_00ef371e)arg7 invert:(BOOL)arg8 networkInputSize:(CGSize)arg9 garbageSymbol:(unsigned short)arg10;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(struct CHNeuralNetwork )arg6 activations:(vector_00ef371e)arg7 invert:(BOOL)arg8 garbageSymbol:(unsigned short)arg9;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withCodeMap:(const int )arg6 activations:(vector_00ef371e)arg7 invert:(BOOL)arg8 networkInputSize:(CGSize)arg9;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(struct CHNeuralNetwork )arg6 activations:(vector_00ef371e)arg7 invert:(BOOL)arg8;
+ (id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2 improved:(BOOL)arg3;
+ (BOOL)derotateContentsOf:(id)arg1 inImage:(struct vImage_Buffer)arg2 andOutputTo:(struct vImage_Buffer )arg3 withPadding:(CGPoint)arg4 networkInputSize:(CGSize)arg5;
+ (id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(CGSize)arg2 plusPadding:(CGPoint)arg3 destSize:(CGSize )arg4 networkInputSize:(CGSize)arg5;
+ (id)widestVersionOfRect:(id)arg1 insideImageWithSize:(CGSize)arg2;
+ (BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andImageWithSize:(CGSize)arg3 intersectAtPoint:(CGPoint )arg4 andPoint:(CGPoint )arg5;
+ (BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andRectangle:(CGRect)arg3 intersectAtPoint:(CGPoint )arg4 andPoint:(CGPoint )arg5;
+ (BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andSegmentStartingAt:(CGPoint)arg3 andEndingAt:(CGPoint)arg4 intersectAt:(CGPoint )arg5;
+ (BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andLineThroughPoint:(CGPoint)arg3 andPoint:(CGPoint)arg4 intersectAt:(CGPoint )arg5;
+ (BOOL)isPointArrayARectangle:(id)arg1;
+ (id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(CGSize)arg2;
+ (id)cleanTextDetectorOutput:(id)arg1;

@end

