import boto3


def log_to_cloudwatch(event):
    client = boto3.client('cloudwatch')


def log_to_s3(event):
    client = boto3.client('s3')


def log_error(err):
    client = boto3.client('cloudwatch')


def lambda_handler(event, _):
    try:
        log_to_s3(event)
        log_to_cloudwatch(event)
        return 'All good'

    except Exception as err:
        log_error(err)
        return 'Something went wrong'
