//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVPlayerViewController.h>

__attribute__((visibility("hidden")))
@interface LPAVPlayerViewController : AVPlayerViewController
{
    id /* block */ _readyForDisplayCallback;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithPlayerLayerView:(id)arg1;

@end
