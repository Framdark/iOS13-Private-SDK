//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSMutableSet, NSURL;
@protocol AMSBagProtocol;

@interface AMSOpenURL : NSObject
{
    NSMutableSet *_attemptedTargets;
    NSURL *_URL;
    AMSProcessInfo *_clientInfo;
    id <AMSBagProtocol> _bag;
}

+ (id)_sortedTargets;
+ (id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2;
+ (id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;
+ (void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3;
+ (_Bool)openStandardURL:(id)arg1;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableSet *attemptedTargets; // @synthesize attemptedTargets=_attemptedTargets;
- (_Bool)_shouldAttemptUsingInfo:(id)arg1;
- (_Bool)_openURL:(id)arg1 bundleInfo:(id)arg2;
- (id)_performOpen;
- (id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;

@end
