//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DDAction, UIAlertController;

@protocol DDDetectionControllerInteractionDelegate <NSObject>

@optional
- (void)actionDidFinish:(DDAction *)arg1;
- (void)actionWillStart:(DDAction *)arg1;
- (void)action:(DDAction *)arg1 didDismissAlertController:(UIAlertController *)arg2;
@end

