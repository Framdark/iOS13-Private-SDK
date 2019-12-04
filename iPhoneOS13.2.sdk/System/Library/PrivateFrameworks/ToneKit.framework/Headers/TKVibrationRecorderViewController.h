//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <ToneKit/PSStateRestoration-Protocol.h>

@class NSString, TKVibrationRecorderContentViewController;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration>
{
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

@property(nonatomic) __weak id <TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;
- (_Bool)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
