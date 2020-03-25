//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTTodayResultsSource-Protocol.h>

@class FCAsyncSerialQueue;
@protocol FCContentContext, NTReadablePrivateDataStorage, NTTodayResultsFetchDescriptor;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource>
{
    BOOL _flushingHasBeenEnabled;
    id <NTTodayResultsFetchDescriptor> _fetchDescriptor;
    id <NTReadablePrivateDataStorage> _privateDataStorage;
    id <FCContentContext> _contentContext;
    id /* CDUnknownBlockType */ _sessionProvider;
    FCAsyncSerialQueue *_serialQueue;
}

@property(nonatomic, getter=hasFlushingBeenEnabled) BOOL flushingHasBeenEnabled; // @synthesize flushingHasBeenEnabled=_flushingHasBeenEnabled;
@property(readonly, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(readonly, nonatomic) id <NTReadablePrivateDataStorage> privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
@property(readonly, copy, nonatomic) id <NTTodayResultsFetchDescriptor> fetchDescriptor; // @synthesize fetchDescriptor=_fetchDescriptor;
// - (void).cxx_destruct;
- (void)_fetchLatestResultsWithOperationInfo:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 sessionProvider:(id /* CDUnknownBlockType */)arg4 fetchQueue:(id)arg5;
- (id)init;

@end
