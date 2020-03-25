//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKURLBagCache, NSURL;

@interface TVStoreApplicationSetupHelper : NSObject
{
    NSURL *_defaultBootURL;
    IKURLBagCache *_bagCache;
}

+ (id)_parsedQueryParametersForURL:(id)arg1;
+ (id)bootURLWithBagBootURL:(id)arg1 defaultBootURL:(id)arg2;
+ (id)fallbackBootURL;
+ (id)preferredBootURL;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 bagBootURLKey:(id)arg3 useCache:(BOOL)arg4;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 useCache:(BOOL)arg3;
+ (id)launchContextWithLaunchOptions:(id)arg1 bagBootURLKey:(id)arg2 useCache:(BOOL)arg3;
+ (id)defaultBagBootLaunchContextWithOptions:(id)arg1 useCache:(BOOL)arg2;
@property(readonly, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property(copy, nonatomic) NSURL *defaultBootURL; // @synthesize defaultBootURL=_defaultBootURL;
// - (void).cxx_destruct;
- (void)obtainBootURLWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithDefaultBootURL:(id)arg1 bagCache:(id)arg2;
- (id)initWithDefaultBootURL:(id)arg1;
- (id)init;

@end
