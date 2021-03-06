//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/PLExpandableView.h>

@class NSString, PLImageView, PLManagedAsset, PLVideoView;

@interface PLExpandableImageView : PLExpandableView
{
    PLImageView *_imageView;
    int _imageID;
    CGSize _originalSize;
    double _originalWidth;
    double _originalAngle;
    CGPoint _anchorPoint;
    double _imageRotationAngle;
    double _pinchWidth;
    double _pinchAngle;
    double _pinchScale;
    CGRect _initialExpandingFrame;
    CGRect _originalBounds;
    float _currentAngle;
    CGSize _centerOffset;
    PLManagedAsset *_photo;
    struct {
        unsigned int isRotating:1;
        unsigned int didTrack:1;
        unsigned int updateFrame:1;
        unsigned int didLayout:1;
        unsigned int alwaysDoLayout:1;
        unsigned int didComputeCenterOffset:1;
        unsigned int imageIsFullScreen:1;
    } _exImageFlags;
}

+ (double)imageBorderWidth;
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void)renderSnapshotInContext:(CGContext )arg1;
- (void)setTextBadgeString:(id)arg1;
- (BOOL)isBeingManipulated;
- (double)transitionProgress;
- (void)setTransitionProgress:(double)arg1;
- (BOOL)isShadowEnabled;
- (void)setShadowEnabled:(BOOL)arg1;
- (double)imageRotationAngle;
@property(retain, nonatomic) PLVideoView *videoView;
- (CGRect)frameOfImage;
@property(readonly, nonatomic) CGSize imageSize;
- (id)imageView;
@property(readonly, nonatomic) BOOL showsPlaceholder;
@property(copy, nonatomic) NSString *name;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(CGSize)arg2 orientation:(long long)arg3;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 isFullscreen:(BOOL)arg2;
@property(nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
- (void)setCenter:(CGPoint)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)_contentView;
- (void)finishTransition;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void )arg3;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void )arg3;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (void)setTransformAndCenterForFrame:(CGRect)arg1;
- (CGSize)_newSizeFromSize:(CGSize)arg1;
- (float)continueTrackingPinch:(id)arg1;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(CGPoint)arg1 rightPoint:(CGPoint)arg2;
- (void)_updateBorderAndAccessoriesAlpha;
- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)setSize:(CGSize)arg1 angle:(float)arg2;
- (void)beginTrackingPinch:(id)arg1;
- (void)_setOriginalSize:(CGSize)arg1;
- (void)stateDidChangeFrom:(int)arg1;
- (CGRect)_snappedExpandedFrame;
- (float)_expansionFraction;
- (float)_expandedScale;
- (float)_currentScale;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2;
- (id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2 withBorder:(BOOL)arg3;

@end

