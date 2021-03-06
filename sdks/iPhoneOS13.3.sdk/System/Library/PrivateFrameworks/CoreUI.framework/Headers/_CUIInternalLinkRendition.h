//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionKey, CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore;

__attribute__((visibility("hidden")))
@interface _CUIInternalLinkRendition : CUIThemeRendition
{
    unsigned int _nimages;
    CGRect _imageRect[16];
    CGImage _image[16];
    CGImage _unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    CGRect _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIRenditionKey *_referenceKey;
    CGSize _originalUncroppedSize;
    CGRect _alphaCroppedFrame;
}

// - (void).cxx_destruct;
- (CGRect)alphaCroppedRect;
- (CGSize)originalUncroppedSize;
- (BOOL)edgesOnly;
- (BOOL)isTiled;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (void)_fillOutImageSlices;
- (id)properties;
- (id)data;
- (CGImage )unslicedImage;
- (CGImage )_sourceImage;
- (id)_sourceRendition;
- (BOOL)isScaled;
- (id)metrics;
- (id)sliceInformation;
- (CGSize)unslicedSize;
- (CGRect)_destinationFrame;
- (id)linkingToRendition;
- (BOOL)isInternalLink;
- (int)pixelFormat;
- (BOOL)isOpaque;
- (int)bitmapEncoding;
- (id)_initWithCSIHeader:(const struct _csiheader )arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken )arg2 artworkStatus:(long long)arg3;
- (void)dealloc;

@end

