//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext
{
    NSString *_parentName;
    NSString *_requestedResourceName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *requestedResourceName; // @synthesize requestedResourceName=_requestedResourceName;
@property(copy, nonatomic) NSString *parentName; // @synthesize parentName=_parentName;
// - (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3;

@end
