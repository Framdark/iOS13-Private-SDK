//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UITextPlaceholderAttachment : NSTextAttachment
{
    NSDictionary *_typingAttributesBeforeInsertion;
    NSRange * _attachmentRange;
}

@property(copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion; // @synthesize typingAttributesBeforeInsertion=_typingAttributesBeforeInsertion;
@property(nonatomic) NSRange * attachmentRange; // @synthesize attachmentRange=_attachmentRange;
// - (void).cxx_destruct;
- (id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(NSUInteger)arg3;

@end
