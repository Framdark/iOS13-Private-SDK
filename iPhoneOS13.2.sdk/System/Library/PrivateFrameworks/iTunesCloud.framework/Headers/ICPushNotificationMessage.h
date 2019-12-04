//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ICPushNotificationMessage : NSObject
{
    NSDictionary *_userInfo;
    NSNumber *_accountDSID;
    long long _actionType;
    NSDictionary *_apsPayload;
}

@property(readonly, copy, nonatomic) NSDictionary *apsPayload; // @synthesize apsPayload=_apsPayload;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(readonly, copy, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)initWithMessageUserInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property(readonly, nonatomic) long long sagaServerRevision;
@property(readonly, copy, nonatomic) NSArray *jaliscoChangedMediaTypes;
@property(readonly, nonatomic) long long jaliscoServerRevision;
@property(readonly, nonatomic) long long moduleIdentifier;
@property(readonly, copy, nonatomic) NSString *clientIdentifier;

@end
