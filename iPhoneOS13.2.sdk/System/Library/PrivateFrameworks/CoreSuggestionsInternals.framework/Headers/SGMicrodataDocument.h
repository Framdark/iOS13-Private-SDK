//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SGMicrodataDocument : NSObject
{
    NSMutableDictionary *_htmlIds;
    NSMutableArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSDictionary *htmlIds; // @synthesize htmlIds=_htmlIds;
- (id)init;
- (void)addItem:(id)arg1;
- (void)setHtmlIdItemScope:(id)arg1 forHtmlId:(id)arg2;
- (id)asJsonLd;
- (id)jsonLdForItem:(id)arg1;

@end
