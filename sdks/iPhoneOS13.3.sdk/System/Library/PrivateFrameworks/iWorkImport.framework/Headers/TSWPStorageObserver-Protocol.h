//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, TSWPStorage;

@protocol TSWPStorageObserver <NSObject>

@optional
- (void)storage:(TSWPStorage *)arg1 didChangeRange:(_NSRange)arg2 delta:(long long)arg3 broadcastKind:(NSUInteger)arg4 attributeKindChanges:(NSArray *)arg5;
@end

