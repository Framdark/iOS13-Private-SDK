//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol TSURandomWriteChannel <TSUIOChannel>
- (void)truncateToLength:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 offset:(long long)arg2 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

