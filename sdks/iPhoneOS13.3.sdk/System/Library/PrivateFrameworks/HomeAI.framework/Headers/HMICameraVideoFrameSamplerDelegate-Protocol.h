//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMICameraVideoFrame, HMICameraVideoFrameSampler;

@protocol HMICameraVideoFrameSamplerDelegate <NSObject>

@optional
- (void)sampler:(HMICameraVideoFrameSampler *)arg1 didDiscardFrame:(HMICameraVideoFrame *)arg2;
- (void)sampler:(HMICameraVideoFrameSampler *)arg1 didFindSample:(HMICameraVideoFrame *)arg2 target:(HMICameraVideoFrame *)arg3;
- (void)sampler:(HMICameraVideoFrameSampler *)arg1 didFindSample:(HMICameraVideoFrame *)arg2;
@end
