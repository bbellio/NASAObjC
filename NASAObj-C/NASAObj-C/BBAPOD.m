//
//  BBAPOD.m
//  NASAObj-C
//
//  Created by Bethany Wride on 10/9/19.
//  Copyright © 2019 Bethany Wride. All rights reserved.
//

#import "BBAPOD.h"

@implementation BBAPOD
- (BBAPOD *)initWithTitle:(NSString *)title explanation:(NSString *)explanation date:(NSDate *)date imageURL:(NSString *)imageURL
{
    self = [super init];
    if (self)
    {
        _title = title;
        _explanation = explanation;
        _date = date;
        _imageURL = imageURL;
        //Convenince init?
    }
    return self;
}
@end
