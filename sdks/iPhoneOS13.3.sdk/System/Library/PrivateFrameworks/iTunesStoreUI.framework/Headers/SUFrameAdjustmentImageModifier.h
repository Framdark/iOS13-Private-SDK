//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@interface SUFrameAdjustmentImageModifier : SUImageModifier
{
    BOOL _shouldSizeDownToFit;
    NSUInteger _sizingMask;
}

@property(nonatomic) BOOL shouldSizeDownToFit; // @synthesize shouldSizeDownToFit=_shouldSizeDownToFit;
@property(nonatomic) NSUInteger sizingMask; // @synthesize sizingMask=_sizingMask;
- (BOOL)scalesImage;
- (CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (BOOL)isEqual:(id)arg1;

@end
