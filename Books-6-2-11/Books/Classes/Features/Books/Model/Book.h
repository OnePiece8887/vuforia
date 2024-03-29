/*===============================================================================
Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/


#import <Foundation/Foundation.h>

@interface Book : NSObject
{
    NSString *targetID;
    NSString *thumbnailURL;
    NSInteger ratingsQuantity;
    float ratingAverage;
    float listPrice;
    float yourPrice;
    NSString *title;
    NSString *author;
    NSString *bookURL;
}

@property (assign) NSInteger ratingsQuantity;
@property (assign) float ratingAverage;
@property (assign) float listPrice;
@property (assign) float yourPrice;
@property (copy) NSString *title;
@property (copy) NSString *author;
@property (copy) NSString *targetID;
@property (copy) NSString *thumbnailURL;
@property (copy) NSString *bookURL;

@property (readonly) NSString *yourPriceString;
@property (readonly) NSString *listPriceString;

-(id)initWithDictionary:(NSDictionary *)aDictionary;
@end
