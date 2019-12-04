//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationRequest, NCNotificationSectionSettings, NSString;

@protocol NCNotificationListComponent <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>
@property(copy, nonatomic) NSString *logDescription;
@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated;
@property(readonly, nonatomic) unsigned long long notificationCount;
@property(readonly, nonatomic) unsigned long long count;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (void)reloadNotificationRequest:(NCNotificationRequest *)arg1;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (void)removeNotificationRequest:(NCNotificationRequest *)arg1;
- (void)insertNotificationRequest:(NCNotificationRequest *)arg1;
@end
