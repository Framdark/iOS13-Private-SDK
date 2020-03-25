//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TVMediaPlaybackManager;

@protocol TVMediaPlaybackManagerDelegate <NSObject>
- (void)mediaPlaybackManager:(TVMediaPlaybackManager *)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(void (^)(void))arg4 completion:(void (^)(BOOL))arg5;

@optional
- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(TVMediaPlaybackManager *)arg1;
- (BOOL)presentForegroundPlaybackControllerForMediaPlaybackManager:(TVMediaPlaybackManager *)arg1;
- (BOOL)mediaPlaybackManager:(TVMediaPlaybackManager *)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
@end

