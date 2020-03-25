//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPStorageParagraphObserver-Protocol.h>

@class TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPLayoutMetricsCache : NSObject <TSWPStorageParagraphObserver>
{
    TSWPStorage *_storage;
    struct vector<TSWPParagraphMetrics, std::__1::allocator<TSWPParagraphMetrics>> _paragraphMetrics;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)storage:(id)arg1 didChangeParagraphsInIndexRange:(_NSRange)arg2;
- (void)storage:(id)arg1 didDeleteParagraphsInIndexRange:(_NSRange)arg2;
- (void)storage:(id)arg1 didInsertParagraphsInIndexRange:(_NSRange)arg2;
- (void)reset;
- (struct TSWPParagraphMetrics )paragraphMetricsForParagraphAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

@end

