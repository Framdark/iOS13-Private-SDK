//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSCountedSet (PGExtensions)
- (unsigned long long)pg_accumulatedCount;
- (unsigned long long)pg_countForRange:(struct _NSRange)arg1;
- (id)pg_sortedArrayByCountAscending:(_Bool)arg1;
- (id)pg_objectWithMinCount;
- (id)pg_objectWithMaxCount;
@end
