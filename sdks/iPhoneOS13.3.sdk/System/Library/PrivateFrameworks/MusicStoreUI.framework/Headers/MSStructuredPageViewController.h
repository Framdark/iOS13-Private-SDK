//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUStructuredPageGroupedViewController.h>

@class NSIndexPath, SUAudioPlayer, SUPlayerStatus, SUSegmentedControl;

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController
{
    SUSegmentedControl *_inlineSegmentedControl;
    NSIndexPath *_previewIndexPath;
    SUAudioPlayer *_previewPlayer;
    SUPlayerStatus *_previewStatus;
}

- (void)_stopPreviewPlayback;
- (void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_handlePreviewForIndexPath:(id)arg1;
- (BOOL)_handleMediaPreviewForIndexPath:(id)arg1;
- (BOOL)_handleInlinePreviewForIndexPath:(id)arg1;
- (void)_playerStatusChangeNotification:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setSkLoading:(BOOL)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (BOOL)purchaseItemAtIndexPath:(id)arg1;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (BOOL)canDisplaySectionGroup:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)init;

@end
