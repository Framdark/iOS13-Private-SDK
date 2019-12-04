//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASReachabilityStatusCache, NSOperationQueue, NSString;

@interface ASReachabilityManager : NSObject
{
    ASReachabilityStatusCache *_statusCache;
    NSOperationQueue *_queryOperationQueue;
    NSString *_serviceIdentifier;
}

+ (id)sharedInstanceForServiceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (long long)numberOfScheduledQueries;
- (void)queryDestinations:(id)arg1 updateHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_addDestinationsToQuery:(id)arg1 updateHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_initWithServiceIdentifer:(id)arg1;
- (id)init;

@end
