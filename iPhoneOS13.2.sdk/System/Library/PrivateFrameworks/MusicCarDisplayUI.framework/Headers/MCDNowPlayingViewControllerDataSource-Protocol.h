//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, UIImage, _MCDNowPlayingViewController;

@protocol MCDNowPlayingViewControllerDataSource 
- (_Bool)nowPlayingViewControllerIsPlaying:(_MCDNowPlayingViewController *)arg1;
- (CDStruct_fce57115)durationSnapshotForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerIsShowingExplicitTrack:(_MCDNowPlayingViewController *)arg1;
- (UIImage *)backgroundArtForNowPlayingController:(_MCDNowPlayingViewController *)arg1;
- (NSString *)titleForNowPlayingController:(_MCDNowPlayingViewController *)arg1;
- (NSString *)albumTextForNowPlayingController:(_MCDNowPlayingViewController *)arg1;
- (NSString *)artistTextForNowPlayingController:(_MCDNowPlayingViewController *)arg1;

@optional
- (_Bool)likedForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
- (long long)repeatTypeForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
@end
