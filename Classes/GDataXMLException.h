//
// cooocoa - Copyright 2012 Three Rings Design


@class GDataXMLElement;

@interface GDataXMLException : NSException

+ (GDataXMLException*)withReason:(NSString*)format, ...;
+ (GDataXMLException*)withElement:(GDataXMLElement*)badElement reason:(NSString*)format, ...;
- (id)initWithReason:(NSString*)reason;

@end
