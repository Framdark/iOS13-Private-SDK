//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject
{
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    NSUInteger _count;
}

// - (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)objectEnumerator;
- (id)description;
- (NSUInteger)count;
- (id)dequeueObject;
- (id)dequeueObjectRetained;
- (void)enqueueObject:(id)arg1;
- (id)topObject;
- (id)popObjectRetained;
- (id)popObject;
- (void)pushObject:(id)arg1;
- (void)pushArray:(id)arg1;
- (void)removeAllObjects;
- (void)dealloc;

@end

