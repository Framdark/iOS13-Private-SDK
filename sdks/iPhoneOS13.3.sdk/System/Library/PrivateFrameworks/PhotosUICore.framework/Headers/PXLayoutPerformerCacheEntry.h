//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXLayoutPerformer;

@interface PXLayoutPerformerCacheEntry : NSObject
{
    id <PXLayoutPerformer> _performer;
    NSUInteger _reentryCount;
}

@property(nonatomic) NSUInteger reentryCount; // @synthesize reentryCount=_reentryCount;
@property(retain, nonatomic) id <PXLayoutPerformer> performer; // @synthesize performer=_performer;
// - (void).cxx_destruct;

@end

