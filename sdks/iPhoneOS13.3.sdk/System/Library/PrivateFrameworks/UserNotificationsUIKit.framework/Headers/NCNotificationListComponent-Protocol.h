//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationRequest, NCNotificationSectionSettings, NSString;

@protocol NCNotificationListComponent <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>
@property(copy, nonatomic) NSString *logDescription;
@property(nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property(readonly, nonatomic) NSUInteger notificationCount;
@property(readonly, nonatomic) NSUInteger count;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (void)reloadNotificationRequest:(NCNotificationRequest *)arg1;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (void)removeNotificationRequest:(NCNotificationRequest *)arg1;
- (void)insertNotificationRequest:(NCNotificationRequest *)arg1;
@end

