//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _UITableViewDropPlaceholderContextImpl;

@protocol _UITableViewPlaceholderContextDelegate <NSObject>
- (BOOL)commitPlaceholderInsertionWithContext:(_UITableViewDropPlaceholderContextImpl *)arg1 dataSourceUpdates:(void (^)(NSIndexPath *))arg2;
- (BOOL)deletePlaceholder:(_UITableViewDropPlaceholderContextImpl *)arg1;
@end
