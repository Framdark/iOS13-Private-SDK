//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PFPhotosFaceRepresentation-Protocol.h>

@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation>
{
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
}

- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationRoll;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationQualityMeasure;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationHasSmile;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (id)description;
- (id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5;

@end
