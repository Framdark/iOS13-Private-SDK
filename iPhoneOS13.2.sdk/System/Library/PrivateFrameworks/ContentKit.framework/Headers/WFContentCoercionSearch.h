//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, WFCoercionOptions, WFContentCoercionNode, WFType;

@interface WFContentCoercionSearch : NSObject
{
    WFCoercionOptions *_options;
    WFContentCoercionNode *_startNode;
    NSArray *_goalItemClasses;
    WFType *_goalType;
    NSMutableOrderedSet *_visitedStates;
    NSMutableArray *_agenda;
}

+ (id)searchForCoercingItem:(id)arg1 toType:(id)arg2 options:(id)arg3;
+ (id)searchForCoercingItem:(id)arg1 toItemClasses:(id)arg2 options:(id)arg3;
+ (id)searchForCoercingItem:(id)arg1 toItemClass:(Class)arg2 options:(id)arg3;
@property(readonly, nonatomic) NSMutableArray *agenda; // @synthesize agenda=_agenda;
@property(readonly, nonatomic) NSMutableOrderedSet *visitedStates; // @synthesize visitedStates=_visitedStates;
@property(readonly, nonatomic) WFType *goalType; // @synthesize goalType=_goalType;
@property(readonly, nonatomic) NSArray *goalItemClasses; // @synthesize goalItemClasses=_goalItemClasses;
@property(readonly, nonatomic) WFContentCoercionNode *startNode; // @synthesize startNode=_startNode;
@property(readonly, nonatomic) WFCoercionOptions *options; // @synthesize options=_options;
- (id)continueCoercionWithContentItems:(id)arg1 error:(id *)arg2;
- (id)runCoercionSynchronouslyWithError:(id *)arg1;
- (void)continueCoercionWithContentItems:(id)arg1 error:(id)arg2 handler:(id /* block */)arg3;
- (void)runCoercion:(id /* block */)arg1;
- (id)badCoercionError;
- (id)nextPathNode;
- (_Bool)goalTest:(id)arg1;
- (_Bool)isCoercionPathAllowedForNode:(id)arg1;
- (id)initWithStartNode:(id)arg1 goalItemClasses:(id)arg2 goalType:(id)arg3 options:(id)arg4;

@end
