//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSetupAccessoryDescription;
@protocol HMSetupRemoteService;

@interface HFSetupPairingContext : NSObject
{
    _Bool _isTrustedOrigin;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
    id <HMSetupRemoteService> _setupRemoteService;
}

@property(nonatomic) _Bool isTrustedOrigin; // @synthesize isTrustedOrigin=_isTrustedOrigin;
@property(nonatomic) __weak id <HMSetupRemoteService> setupRemoteService; // @synthesize setupRemoteService=_setupRemoteService;
@property(retain, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
- (id)init;
- (id)initWithSetupAccessoryDescription:(id)arg1 setupRemoteService:(id)arg2 isTrustedOrigin:(_Bool)arg3;

@end
