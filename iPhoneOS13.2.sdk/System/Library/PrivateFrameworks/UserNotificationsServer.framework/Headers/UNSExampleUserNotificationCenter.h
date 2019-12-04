//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PTTestRecipe, UNUserNotificationCenter;

@interface UNSExampleUserNotificationCenter : NSObject
{
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}

- (id)_basicPostUpdateRecipe;
- (id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2;
- (id)_userNotificationCenter;
- (id)_existingNotificationRequestForIdentifier:(id)arg1;
- (void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2;
- (void)removeAllNotifications;
- (void)update;
- (void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)publish:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1;
- (void)publish;
- (id)sectionIdentifier;
- (id)latestNotificationRequestIdentifier;
- (id)init;

@end
