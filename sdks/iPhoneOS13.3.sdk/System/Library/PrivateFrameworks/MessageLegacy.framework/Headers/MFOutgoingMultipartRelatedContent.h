//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent
{
    NSString *_htmlBody;
}

@property(retain, nonatomic) NSString *htmlBody; // @synthesize htmlBody=_htmlBody;
- (id)multipartContent;
- (id)copy;
- (void)dealloc;

@end

