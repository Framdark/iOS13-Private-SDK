//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OCDDelayedNodeContext;

__attribute__((visibility("hidden")))
@interface OCDDelayedNode : NSObject
{
    id <OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

// - (void).cxx_destruct;
- (BOOL)load;
- (void)setLoaded:(BOOL)arg1;
- (BOOL)isLoaded;
- (id)delayedContext;
- (void)setDelayedContext:(id)arg1;

@end

