//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXLayer.h>

@class CALayer;

@interface SXClippingLayer : SXLayer
{
    CALayer *_contentLayer;
    unsigned long long _clippingMode;
    struct CGRect _contentFrame;
}

@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) unsigned long long clippingMode; // @synthesize clippingMode=_clippingMode;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (void)layoutForMasking;
- (void)layoutForContentsRect;
- (void)layoutSublayers;

@end
