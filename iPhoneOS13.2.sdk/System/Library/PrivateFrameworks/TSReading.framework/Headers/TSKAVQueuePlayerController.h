//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKAVPlayerController.h>

@class NSArray;

@interface TSKAVQueuePlayerController : TSKAVPlayerController
{
    NSArray *mAssets;
}

- (void)p_enqueueAssetsFromIndex:(unsigned long long)arg1;
- (void)skipToAssetAtIndex:(unsigned long long)arg1;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)dealloc;
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 initialAssetIndex:(unsigned long long)arg4;
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3;

@end
