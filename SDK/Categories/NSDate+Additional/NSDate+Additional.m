//
//  NSDate+Additional.m
//

#import "NSDate+Additional.h"

@implementation NSDate (Timestamp)

- (NSComparisonResult)hay_compareDateWithoutTimeTo:(NSDate *)date
{
    return NSOrderedSame;
}

@end
