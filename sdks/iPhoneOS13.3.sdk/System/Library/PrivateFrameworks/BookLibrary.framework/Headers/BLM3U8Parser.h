//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSError, NSMutableData;
@protocol BLM3U8ParserDelegate;

@interface BLM3U8Parser : NSObject <NSURLSessionDataDelegate>
{
    BOOL _collectForRewrite;
    id <BLM3U8ParserDelegate> _delegate;
    NSData *_data;
    NSMutableData *_bytes;
    NSError *_error;
    NSMutableData *_collectedData;
}

@property(retain, nonatomic) NSMutableData *collectedData; // @synthesize collectedData=_collectedData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *bytes; // @synthesize bytes=_bytes;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) BOOL collectForRewrite; // @synthesize collectForRewrite=_collectForRewrite;
@property(nonatomic) __weak id <BLM3U8ParserDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)rewriteWithURL:(id)arg1;
- (void)saveLine:(id)arg1;
- (void)processLine;
- (id)parseAttributeList:(id)arg1;
- (NSUInteger)consumeBytes:(const void )arg1 length:(NSUInteger)arg2;
- (BOOL)parseWithError:(id )arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
