//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NAFuture;
@protocol HUConfigurationContentViewControllerDelegate;

@protocol HUConfigurationContentViewController <NSObject>

@optional
@property(nonatomic) __weak id <HUConfigurationContentViewControllerDelegate> delegate;
@property(readonly, nonatomic) BOOL canFinishConfiguration;
- (NAFuture *)cancelConfiguration;
- (NAFuture *)finishConfiguration;
@end

