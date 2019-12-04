//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class MPMediaQuery, MPUSearchDataSource, NSString;

@interface _MPUSearchOperation : NSOperation
{
    long long _entityType;
    MPMediaQuery *_query;
    MPUSearchDataSource *_dataSource;
    NSString *_searchString;
}

@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) __weak MPUSearchDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)main;
- (void)executeSearch;
- (id)description;
- (id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2;

@end
