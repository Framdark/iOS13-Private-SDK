//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewControllerDelegate-Protocol.h>

@class HFItem, HUContainedServicesGridViewController, UIViewController;
@protocol HUDetailsPresentationDelegateHost;

@protocol HUContainedServiceGridViewControllerDelegate <NSObject, HUServiceGridViewControllerDelegate>

@optional
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForContainedServiceGridViewController:(HUContainedServicesGridViewController *)arg1 item:(HFItem *)arg2;
- (BOOL)hasDetailsActionForContainedServiceGridViewController:(HUContainedServicesGridViewController *)arg1 item:(HFItem *)arg2;
@end

