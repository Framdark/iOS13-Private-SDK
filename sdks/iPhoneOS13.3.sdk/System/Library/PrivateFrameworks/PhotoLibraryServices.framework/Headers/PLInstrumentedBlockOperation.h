//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@interface PLInstrumentedBlockOperation : NSBlockOperation
{
    BOOL _postambleAdded;
    double _creationTime;
    double _executionStartTime;
    double _executionEndTime;
}

+ (id)blockOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic) BOOL postambleAdded; // @synthesize postambleAdded=_postambleAdded;
@property(nonatomic) double executionEndTime; // @synthesize executionEndTime=_executionEndTime;
@property(nonatomic) double executionStartTime; // @synthesize executionStartTime=_executionStartTime;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) double timeSpentWaitingInQueue; // @dynamic timeSpentWaitingInQueue;
@property(readonly, nonatomic) double executionTime; // @dynamic executionTime;
- (id)description;
- (void)addExecutionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
