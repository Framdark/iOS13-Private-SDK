//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, UITableView;

@protocol UITableViewDataSourcePrefetching 
- (void)tableView:(UITableView *)arg1 prefetchRowsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)tableView:(UITableView *)arg1 cancelPrefetchingForRowsAtIndexPaths:(NSArray *)arg2;
@end
